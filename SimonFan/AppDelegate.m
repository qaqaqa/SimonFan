//
//  AppDelegate.m
//  SimonFan
//
//  Created by sparxo-dev-ios-1 on 2022/9/30.
//

#import "AppDelegate.h"
#import "ViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    UIViewController *rootViewController = [[ViewController alloc] init];
    [self.window setRootViewController:rootViewController];
    
    return YES;
}

@end
