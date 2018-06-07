//
//  PhotoAlbumCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 16/12/16.
//  Copyright © 2016 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoAlbumCollectionViewCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UIImageView *imgDot;
@property (retain,nonatomic) IBOutlet UILabel *lblVideoTest;

@property (retain,nonatomic) IBOutlet UIImageView *imgBackgroungCentric;

@property (retain,nonatomic) IBOutlet UIImageView *imgBackgroungMain;
@property (retain,nonatomic) IBOutlet UIView *viewBackgroungMain;
@property (retain,nonatomic) IBOutlet CAGradientLayer *gradient;
@property (retain,nonatomic) IBOutlet UIImageView *imgStreamImage;
@property (retain,nonatomic) IBOutlet UILabel *lblStreamSecondManage;
@property (retain,nonatomic) IBOutlet UILabel *lblNumberOfPhotosInMain;
@property (weak, nonatomic) IBOutlet UIImageView *imgDupe;

@property (retain,nonatomic) IBOutlet UIView *viewForSelected;
@property (retain,nonatomic) IBOutlet UIView *viewLive;
@property (retain,nonatomic) IBOutlet UIImageView *imgForSelected;

// Streaming to X / Y people
@property (retain,nonatomic) IBOutlet UIView *viewForStreamSignalLogo;
@property (retain,nonatomic) IBOutlet UIView *viewForStreamSignalWithLabel;
@property (retain,nonatomic) IBOutlet UIImageView *imgStreamLogo;
@property (retain,nonatomic) IBOutlet UILabel *lblSignalFirstLabel;
@property (retain,nonatomic) IBOutlet UILabel *lblSignalSecondLabel;

// Loading images in a smarter way
@property (nonatomic) BOOL isLoadingImage;

@property (retain,nonatomic) IBOutlet UIImageView *imgHeart;
@property (retain,nonatomic) IBOutlet UIView *viewHeartMainView;
@property (retain,nonatomic) IBOutlet UIView *viewHeartView;
@property (weak, nonatomic) IBOutlet UILabel *lblHeartCounter;

@property (retain,nonatomic) IBOutlet UIImageView *imgMessage;
@property (retain,nonatomic) IBOutlet UIView *viewMessageMainView;
@property (retain,nonatomic) IBOutlet UIView *viewMessageView;
@property (weak, nonatomic) IBOutlet UILabel *lblMessageCounter;

// Video
@property (retain,nonatomic) IBOutlet UIImageView *imgPlayVideo;
@property (retain,nonatomic) IBOutlet UIView *vLoadVideo;

- (void)addDupeIcon;
-(void)clearDupeIcon;

// Constraints for ACTIVE and VIEWING horizontal positions
@property (nonatomic) IBOutlet NSLayoutConstraint *layoutViewing;
@property (nonatomic) IBOutlet NSLayoutConstraint *layoutLive;

@end
