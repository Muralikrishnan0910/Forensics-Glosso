//
//  HomeViewController.h
//  Forensics Glosso
//
//  Created by BSA Univ15 on 27/08/14.
//  Copyright (c) 2014 BSA Univ15. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController
- (IBAction)sidebarButton:(id)sender;
@property(nonatomic,weak)IBOutlet UIBarButtonItem *sidebarButton;
//@property(nonatomic,weak)IBAction UIBarButtonItem *sidebarButton;
@end
