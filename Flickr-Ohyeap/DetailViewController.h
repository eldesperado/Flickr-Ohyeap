//
//  DetailViewController.h
//  Flickr-Ohyeap
//
//  Created by El Desperado on 6/28/13.
//  Copyright (c) 2013 El Desperado. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
