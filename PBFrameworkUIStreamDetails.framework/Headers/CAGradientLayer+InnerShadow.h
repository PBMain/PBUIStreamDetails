//
//  CAGradientLayer+InnerShadow.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/8/18.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAGradientLayer (InnerShadow)

+ (instancetype) shadowToEdge : (UIRectEdge) edge
                         rect : (CGRect) rect
                       radius : (CGFloat) radius;

@end

NS_ASSUME_NONNULL_END
