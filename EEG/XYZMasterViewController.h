//
//  XYZMasterViewController.h
//  EEG
//
//  Created by Quentin Le Corre on 27/04/13.
//  Copyright (c) 2013 Quentin Le Corre. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XYZDetailViewController;

@interface XYZMasterViewController : UITableViewController

@property (strong, nonatomic) XYZDetailViewController *detailViewController;

@end
