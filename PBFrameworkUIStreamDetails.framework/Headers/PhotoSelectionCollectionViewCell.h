//
//  PhotoSelectionCollectionViewCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 7/24/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoSelectionCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgPhotoThumb;
@property (weak, nonatomic) IBOutlet UIImageView *imgCheck;
@property (weak, nonatomic) IBOutlet UIView *vSelected;
@property (weak, nonatomic) IBOutlet UIView *vPlayButton;
@property (nonatomic) NSString  *assetId;
@end
