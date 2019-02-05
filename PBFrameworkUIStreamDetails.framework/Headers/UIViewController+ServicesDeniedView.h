//
//  UIViewController+ServicesDeniedView.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (ServicesDeniedView)

- (void) showPhotoAccessViewWithAlbumName : (NSString*) albumName
                                  albumID : (NSString*) albumId;

- (void) showCameraAccessViewWithAlbumName : (NSString*) albumName
                                   albumId : (NSString*) albumId;

@end

NS_ASSUME_NONNULL_END
