//
//  AppDelegate.h
//  LearningUmbrellaMaster
//
//  Created by Preeti on 11/04/17.
//  Copyright © 2017 Set Infotech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

