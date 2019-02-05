//
//  PBPullToRefreshAnimator.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/21/18.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

typedef CGFloat (*ViewEasingFunctionPointerType)(CGFloat);

NS_ASSUME_NONNULL_BEGIN

@interface PBPullToRefreshAnimator : NSObject

+ (CABasicAnimation *)repeatRotateAnimation;

+ (CAKeyframeAnimation *)popAnimation;

+ (CAKeyframeAnimation *) animationWithCATransform3DForKeyPath:(NSString *)keyPath
                                                easingFunction:(ViewEasingFunctionPointerType)function
                                                    fromMatrix:(CATransform3D)fromMatrix
                                                      toMatrix:(CATransform3D)toMatrix;

@end

NS_ASSUME_NONNULL_END
