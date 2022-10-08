//
//  ViewController.m
//  SimonFan
//
//  Created by sparxo-dev-ios-1 on 2022/9/30.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor redColor];
    
    UIView *bgView = [[UIView alloc] init];
    bgView.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:bgView];
    [bgView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.left.right.bottom.equalTo(self.view).offset(0);
    }];
    
    UIButton *button = [[UIButton alloc] init];
    [button addTarget:self action:@selector(onClick:) forControlEvents:UIControlEventTouchUpInside];
    [button setTitle:LocalizedString(@"OK", nil) forState:UIControlStateNormal];
    button.backgroundColor = [UIColor redColor];
    button.titleLabel.textColor = [UIColor purpleColor];
    [bgView addSubview:button];
    [button mas_makeConstraints:^(MASConstraintMaker *make) {
        make.center.equalTo(bgView);
        make.width.mas_equalTo(100);
        make.height.mas_equalTo(50);
    }];
}

- (void)onClick:(id)sender{
    FLLog(@"click......");
}

@end
