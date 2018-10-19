#import <Foundation/Foundation.h>
@import UIKit;
NS_ASSUME_NONNULL_BEGIN
@protocol CustomParkMapPinProtocol <NSObject>

- (void)tapPin: (NSInteger) category;

@end


@interface CustomParkMapPin : NSObject

@property (nonatomic) UIButton *pinView;
@property (nonatomic) CGPoint mapOffset;
@property (nonatomic) CGPoint pinOffset;
@property (nonatomic, weak) id<CustomParkMapPinProtocol> delegate;

- (void)postInit;
@end

NS_ASSUME_NONNULL_END
