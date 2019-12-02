//
//  InviteStreamPhotoCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 15/02/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InviteStreamPhotoCollectionViewCell : UICollectionViewCell
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblSubTitle;
@property (retain,nonatomic) IBOutlet UIImageView *imgMain;
@property (retain,nonatomic) IBOutlet UIView *viewmsgBlurb;
@property (retain,nonatomic) IBOutlet UIView *viewmsgBlurbShadow;
@end
