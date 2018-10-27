#import <UIKit/UIKit.h>
#import "CustomParkMapView.h"

@protocol CustomParkMapCellProtocol <NSObject>

- (void)tappedPinCategory: (NSInteger) category;

@end

@class CustomParkMapView;
NS_ASSUME_NONNULL_BEGIN

@interface CustomParkMapCell : UICollectionViewCell <CustomParkMapViewProtocol>
@property (weak, nonatomic) id<CustomParkMapCellProtocol> delegate;
@property (weak, nonatomic) IBOutlet CustomParkMapView *customMap;
@property (weak, nonatomic) NSArray *pins;
@property (weak, nonatomic) NSString *pinImageURL;
@property (weak, nonatomic) NSString *mapImageURL;
@property (nonatomic) float pinOffsetX;
@property (nonatomic) float pinOffsetY;

-(void) setupDisplay;

@end

NS_ASSUME_NONNULL_END
