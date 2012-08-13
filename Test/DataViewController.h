//
//  DataViewController.h
//  Test
//
//  Created by Robert Fauser on 2012-08-13.
//  Copyright (c) 2012 Robert Fauser. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
