#import <UIKit/UIKit.h>

@interface POIStreamAssetList : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (nonatomic) IBOutlet UIView *vAboveSafe;
@property (nonatomic) IBOutlet UIView *vNavigation;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UIButton *btnBack;

@property (nonatomic) UIView *vLoading;
@property (nonatomic) IBOutlet UICollectionView *colvPeople;

@property (nonatomic) NSMutableArray *arrayPOI;

@property (nonatomic) BOOL hasDoneInitialLayout;
@property (nonatomic) BOOL dragRefreshAvailable;
@property (nonatomic) NSLock *lockDragRefresh;

-(IBAction) pressBack:(id)sender;

// Stream Info
@property (nonatomic) NSDictionary *stream;
@property (nonatomic) NSDictionary *poi;
@property (nonatomic) int currentPage;
@property (nonatomic) int pageSize;
@property (nonatomic) BOOL hasMorePages;

// Load first page
-(void) reloadFromServer;

// Go to stream details
@property (nonatomic) IBOutlet UIButton *btnToStream;
-(IBAction)pressToStream:(id)sender;
-(void) hideToStreamButton;

@end
