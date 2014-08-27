//
//  MenuTableViewController.h
//  Forensics Glosso
//
//  Created by BSA Univ15 on 27/08/14.
//  Copyright (c) 2014 BSA Univ15. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWRevealViewController.h"
@interface MenuTableViewController : UITableViewController
@property (nonatomic, strong) NSArray *menuItems;
@property (strong, nonatomic) IBOutlet UITableView *tableview;
@end
