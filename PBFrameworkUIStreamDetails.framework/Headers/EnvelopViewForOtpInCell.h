//
//  EnvelopViewForOtpInCell.h
//  PhotoButler
//
//  Created by Mirant on 16/05/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol EnvelopeCellDelegate
- (void) clickContribute;
- (void) clickViewOnly;
@end

@interface EnvelopViewForOtpInCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UIView *viewContributor;

@property (retain,nonatomic) IBOutlet UIImageView *imageViewProfileIcon1S1;
@property (retain,nonatomic) IBOutlet UIImageView *imageViewProfileIcon2S1;
@property (retain,nonatomic) IBOutlet UIImageView *imageViewProfileIconBG2S1;
@property (retain,nonatomic) IBOutlet UIView *imageViewProfileIconView2S1;
@property (retain,nonatomic) IBOutlet UILabel *labelContributorNameS1;
@property (retain,nonatomic) IBOutlet UILabel *labelStreamNameS1;
@property (retain,nonatomic) IBOutlet UILabel *labelTimeS1;
@property (retain,nonatomic) IBOutlet UILabel *labelIntroStreamTitle;

@property (retain,nonatomic) IBOutlet UIImageView *imageViewProfileIconS2;
@property (retain,nonatomic) IBOutlet UIView *viewStopRoundS2;
@property (retain,nonatomic) IBOutlet UIView *viewimageViewProfileIconS2;
@property (retain,nonatomic) IBOutlet UILabel *labelRemoveS2;
@property (weak, nonatomic) IBOutlet UIButton *btnBecomeContributorP1;
@property (weak, nonatomic) IBOutlet UIButton *btnBecomeContributorP2;

@property (weak, nonatomic) IBOutlet UIView *viewContainer;

@property (weak, nonatomic) id<EnvelopeCellDelegate> delegate;
@end
