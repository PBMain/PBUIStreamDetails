//
//  MainPhotoAlbumCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 15/02/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainPhotoAlbumCollectionViewCell : UICollectionViewCell
@property (retain,nonatomic) IBOutlet UICollectionView *colvMainInTableView;

@property (retain,nonatomic) IBOutlet UIButton *btnStop;
@property (retain,nonatomic) IBOutlet UIButton *btnAudience;
@property (retain,nonatomic) IBOutlet UIButton *btnCamera;
@property (retain,nonatomic) IBOutlet UIView *viewButtonsAll;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutWidthStopLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutWidthAudience;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutWidthCamera;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutWidthStop;

@property (retain,nonatomic) IBOutlet UILabel *labelStop;
@property (retain,nonatomic) IBOutlet UIImageView *imgStop;
@property (retain,nonatomic) IBOutlet UILabel *labelAudience;
@property (retain,nonatomic) IBOutlet UILabel *labelCamera;

@end
