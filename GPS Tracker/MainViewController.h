//
//  MainViewController.h
//  GPS Tracker
//
//  Created by Evan D. Hoffman on 7/23/14.
//  Copyright (c) 2014 Evan D. Hoffman. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
