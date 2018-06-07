//
//  ContributorSpectatorTableViewCell.h
//  PhotoButler
//
//  Created by Mirant on 27/12/16.
//  Copyright © 2016 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContributorSpectatorTableViewCell : UITableViewCell
@property (retain,nonatomic) IBOutlet UILabel *lblShortName;
@property (retain,nonatomic) IBOutlet UILabel *lblName;
@property (retain,nonatomic) IBOutlet UILabel *lblEmail;
@property (retain,nonatomic) IBOutlet UILabel *lblMiddle;
@property (retain,nonatomic) IBOutlet UIImageView *imgMain;
@property (retain,nonatomic) IBOutlet UIImageView *imgBlueIcon;
@property (retain,nonatomic) IBOutlet UIButton *btnForRightSide;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthForButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conNameCenter;

@end
