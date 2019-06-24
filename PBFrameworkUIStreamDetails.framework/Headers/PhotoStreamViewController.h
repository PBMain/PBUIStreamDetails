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
@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) BOOL isHost;

@property (nonatomic,retain) IBOutlet UICollectionView *colvAlbumList;
@property (nonatomic,retain) IBOutlet UILabel *lblAlbumName;
@property (nonatomic,retain) IBOutlet UILabel *lblTitle;
@property (nonatomic,retain) IBOutlet ImageCircle *imgView;
@property (nonatomic,retain) IBOutlet UIView *vScrollingContainer;

@property (nonatomic) LoadingView *loadingView;

@property (nonatomic,retain) IBOutlet UILabel *lblNumberOfPhotos;

// Paging
@property (nonatomic) int pagesLoaded;
@property (nonatomic) int pageSize;
@property (nonatomic) NSString *personID;
@property (nonatomic) BOOL sortAscending;
@property (nonatomic) BOOL doneLoadingAllPages;
@property (nonatomic) BOOL isLoadingPage;

@end
