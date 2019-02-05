//
//  PBInfiniteScrollingControl.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/21/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "PBCircleView.h"
#import "PBCustomPageControlConstants.h"

NS_ASSUME_NONNULL_BEGIN

@class PBInfiniteScrollingControl;

@protocol PBInfiniteScrollingControlDelegate <NSObject>

@required

- (void) loadMorePages : (PBInfiniteScrollingControl*) pbInfiniteScrollingControl;

@end

@interface PBInfiniteScrollingControl : NSObject

@property (nonatomic, assign) UIColor *circleViewTintColor;

@property (nonatomic, weak) id <PBInfiniteScrollingControlDelegate> delegate;

- (id)initWithScrollView : (UIScrollView*) scrollView viewLayerType : (PBViewLayerType) viewLayerType;

- (void) beginLoading;

- (void) endLoading;

@end

NS_ASSUME_NONNULL_END
