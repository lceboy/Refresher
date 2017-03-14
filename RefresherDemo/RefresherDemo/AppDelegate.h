//
//  AppDelegate.h
//  RefresherDemo
//
//  Created by bing on 2017/3/14.
//  Copyright © 2017年 Ji Fen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

