//
//  PhotoStreamViewController.h
//  PhotoButler
//
//  Created by Mirant on 30/12/16.
//  Copyright © 2016 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView_ImageCircle.h"

@class LoadingView;
@interface PhotoStreamViewController : UIViewController<UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>{
    IBOutlet UIView *viewNavigation;
    IBOutlet UIView *btnBack;
}
@property (nonatomic) id person;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumSharedId;
@property (nonatomic) NSString *albumOwnerId;
@property (nonatomic) NSArray *arrayImages;
@property (nonatomic) BOOL isHost;

@property (nonatomic,retain) IBOutlet UICollectionView *colvAlbumList;
@property (nonatomic,retain) IBOutlet UILabel *lblAlbumName;
@property (nonatomic,retain) IBOutlet UILabel *lblTitle;
@property (nonatomic,retain) IBOutlet ImageCircle *imgView;
@property (nonatomic,retain) IBOutlet UIView *vScrollingContainer;

@property (nonatomic) LoadingView *loadingView;

@property (nonatomic,retain) IBOutlet UILabel *lblNumberOfPhotos;
@end
