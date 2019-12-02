//
//  MainPhotoAlbumTableViewCell.h
//  PhotoButler
//
//  Created by Mirant on 16/12/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainPhotoAlbumTableViewCell : UITableViewCell

@property (retain,nonatomic) IBOutlet UICollectionView *colvMainInTableView;

@property (retain,nonatomic) IBOutlet UIButton *btnStop;
@property (retain,nonatomic) IBOutlet UIButton *btnAudience;
@property (retain,nonatomic) IBOutlet UIButton *btnCamera;
@property (retain,nonatomic) IBOutlet UIView *viewButtonsAll;



@end
