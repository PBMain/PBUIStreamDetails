#import <UIKit/UIKit.h>
#import "CustomParkMapPin.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CustomParkMapViewProtocol <NSObject>

- (void)tappedPinCategory: (NSInteger) category;

@end

@interface CustomParkMapView : UIView <UIScrollViewDelegate, CustomParkMapPinProtocol>
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIImageView *mapTerrain;
@property (nonatomic) NSMutableArray *pinInfo;
@property (strong) id<CustomParkMapViewProtocol> delegate;
@property (nonatomic) NSMutableArray *pins;
@property (nonatomic) NSString *pinImageURL;
@property (nonatomic) NSString *mapImageURL;
@property (nonatomic) UIImage *mapImage;
@property (nonatomic) UIImage *pinImage;
@property (nonatomic) NSMutableArray<UIImageView*> *ivLoader;

-(void) drawPins;
-(void) redrawPins;
@end

NS_ASSUME_NONNULL_END
