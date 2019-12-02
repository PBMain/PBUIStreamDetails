//
//  EmptyStateCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 21/02/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EmptyStateCollectionViewCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UIButton *btnCamera;

@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblInst1;
@property (retain,nonatomic) IBOutlet UILabel *lblInst2;

@property (retain,nonatomic) IBOutlet UIImageView *imgCamera;

@end
