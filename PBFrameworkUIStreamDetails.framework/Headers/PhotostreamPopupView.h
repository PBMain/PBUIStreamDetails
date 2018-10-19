//
//  PhotostreamPopupView.h
//  AFNetworking
//
//  Created by Michael Liptuga on 05.10.2018.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PhotostreamPopupView;

@protocol PhotostreamPopupViewDelegate <NSObject>

@optional

- (void) photostreamPopupViewDidClose: (PhotostreamPopupView*) photostreamPopupView;

@end

@interface PhotostreamPopupView : UIView

@property (nonatomic, weak) id<PhotostreamPopupViewDelegate> delegate;

+ (instancetype) showInViewController : (UIViewController*) viewController
                               urlStr : (NSString*) urlStr;

@end

NS_ASSUME_NONNULL_END
