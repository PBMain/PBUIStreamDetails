//
//  PBCustomPageControlConstants.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/21/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PBViewLayerType) {
    PBViewLayerTypeOnSuperView = 0,
    PBViewLayerTypeOnScrollView = 1,
};

typedef NS_ENUM(NSInteger, PBRefreshState) {
    PBRefreshStatePulling   = 0,
    PBRefreshStateNormal    = 1,
    PBRefreshStateLoading   = 2,
    PBRefreshStateStopped   = 3,
};

#define kRefreshCircleViewHeight 44
#define kDefaultRefreshTotalPixels 74

NS_ASSUME_NONNULL_END
