//
//  dfkskDetailViewController.h
//  ProjectZ
//
//  Created by elev on 2013-02-14.
//  Copyright (c) 2013 elev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface dfkskDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
