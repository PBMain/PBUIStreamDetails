#import <UIKit/UIKit.h>

@class LoadingView;
@protocol ChooseImageFromStreamDelegate <NSObject>
@property (nonatomic) NSString *tmpCustomCoverAssetID;
@property (nonatomic) NSString *tmpCustomCoverFileName;
@property (nonatomic) NSString *tmpCustomCoverCreationDate;
- (void)choseImageFromStream:(UIImage*)img assetID:(NSString*)assetID;
@end

@interface ChooseImageFromStream : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    
}

@property (nonatomic, weak) id<ChooseImageFromStreamDelegate> delegate;

@property (nonatomic) NSString *streamID;
@property (nonatomic) NSMutableArray *assetArray;
@property (nonatomic) LoadingView *viewLoading;

@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UICollectionView *cvAssets;

@end
