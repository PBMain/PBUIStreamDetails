//
//  PBPhotoAlbumWithActivityFeedTabBar.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/23/18.
//

#import <UIKit/UIKit.h>

#import "PBTabBarButton.h"

NS_ASSUME_NONNULL_BEGIN
@class PBPhotoAlbumWithActivityFeedTabBar;

@protocol PBPhotoAlbumWithActivityFeedTabBarDelegate <NSObject>

@optional

- (void) pbPhotoAlbumWithActivityFeedTabBarActivityFeedButtonDidTouch: (PBPhotoAlbumWithActivityFeedTabBar*) pbPhotoAlbumWithActivityFeedTabBar;
- (void) pbPhotoAlbumWithActivityFeedTabBarGalleryButtonDidTouch: (PBPhotoAlbumWithActivityFeedTabBar*) pbPhotoAlbumWithActivityFeedTabBar ;

@end

@interface PBPhotoAlbumWithActivityFeedTabBar : UIView

@property (weak, nonatomic) IBOutlet PBTabBarButton *activityFeedButton;
@property (weak, nonatomic) IBOutlet PBTabBarButton *galleryButton;

@property (weak, nonatomic) IBOutlet UIImageView *indicatorOfSelectedTabImageView;

@property (nonatomic, weak) id<PBPhotoAlbumWithActivityFeedTabBarDelegate> delegate;

@property (nonatomic, assign) BOOL isActivityFeedSelected;
@property (nonatomic, assign) NSString *streamID;
@property (nonatomic, assign) NSString *streamName;

+ (instancetype) createWithFrame : (CGRect) frame
          isActivityFeedSelected : (BOOL) isActivityFeedSelected;

@end

NS_ASSUME_NONNULL_END
