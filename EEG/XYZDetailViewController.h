//
//  XYZDetailViewController.h
//  EEG
//
//  Created by Quentin Le Corre on 27/04/13.
//  Copyright (c) 2013 Quentin Le Corre. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
