//
//  AppDelegate.h
//  Git
//
//  Created by 耿荣林 on 2018/5/24.
//  Copyright © 2018年 耿荣林. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

