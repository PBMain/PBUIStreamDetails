//
//  PBRefreshControl.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/21/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "PBCircleView.h"
#import "PBCustomPageControlConstants.h"

NS_ASSUME_NONNULL_BEGIN

@class PBRefreshControl;

@protocol PBRefreshControlDelegate <NSObject>

@required

- (void) beganRefreshing : (PBRefreshControl*) pbRefreshControl;

@end

@interface PBRefreshControl : NSObject

@property (nonatomic, assign) UIColor *circleViewTintColor;

@property (nonatomic, weak) id <PBRefreshControlDelegate> delegate;

- (id) initWithScrollView: (UIScrollView*) scrollView viewLayerType: (PBViewLayerType) viewLayerType;

- (void) beginRefreshing;

- (void) endRefreshing;

@end

@interface PBRefreshCircleContainerView : UIView

@property (nonatomic, strong) PBCircleView *circleView;

@end

NS_ASSUME_NONNULL_END
