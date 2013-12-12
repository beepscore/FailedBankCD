//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Steve Baker on 12/10/13.
//  Copyright (c) 2013 Beepscore LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
