//
//  BasicPhotoListViewController.h
//  PBPodUIStreamDetails
//
//  Created by Philippe Belley on 6/29/18.
//

#import <UIKit/UIKit.h>
#import "ScrollDateIndicator.h"

@interface BasicPhotoListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
@property (weak, nonatomic) IBOutlet UIView *vAboveNav;
@property (weak, nonatomic) IBOutlet UIView *vNavigation;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIButton *sortButton;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subtitleLabel;
@property (weak, nonatomic) IBOutlet UICollectionView *mainCollectionView;
@property (nonatomic) NSMutableArray *assetList;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *categoryName;
@property (nonatomic) NSString *streamName;
@property (nonatomic) NSString *categoryID;
@property (nonatomic) int pagesLoaded;
@property (nonatomic) int assetCount;
@property (nonatomic) BOOL isLoadingPage;
@property (nonatomic) BOOL doneLoadingAllPages;
@property (nonatomic) BOOL didLayout;
@property (nonatomic) BOOL isMapCategory;
@property (nonatomic) BOOL sortAscending;
@property (nonatomic) ScrollDateIndicator *scrollDateIndicator;
@property (nonatomic) UIImageView *scrollDragger;
@property (nonatomic) CGFloat panVelocity_y;
@property (nonatomic) BOOL isDraggingScrollIndicator;
@property (atomic) NSLock *lockLoadVisibleCells;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressSort:(id)sender;

@end
