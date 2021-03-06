//
//  STTTAppDelegate.h
//  SuperTicTacToe
//
//  Created by Jesus Morales on 1/27/14.
//  Copyright (c) 2014 JesusJohn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STTTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
