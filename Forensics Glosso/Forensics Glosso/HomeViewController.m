//
//  HomeViewController.m
//  Forensics Glosso
//
//  Created by BSA Univ15 on 27/08/14.
//  Copyright (c) 2014 BSA Univ15. All rights reserved.
//

#import "HomeViewController.h"
#import "SWRevealViewController.h"
@interface HomeViewController ()

@end

@implementation HomeViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    _sidebarButton.target = self.revealViewController;
    _sidebarButton.action = @selector(revealToggle:);
    
    // Set the gesture
    [self.view addGestureRecognizer:self.revealViewController.panGestureRecognizer];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
