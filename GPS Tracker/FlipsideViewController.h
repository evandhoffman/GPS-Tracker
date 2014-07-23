//
//  FlipsideViewController.h
//  GPS Tracker
//
//  Created by Evan D. Hoffman on 7/23/14.
//  Copyright (c) 2014 Evan D. Hoffman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
