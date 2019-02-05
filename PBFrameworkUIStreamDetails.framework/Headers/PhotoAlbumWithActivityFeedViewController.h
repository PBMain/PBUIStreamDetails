//
//  PhotoAlbumWithActivityFeedViewController.h
//  PBPodUIStreamDetails
//
//  Created by Michael Liptuga on 11/23/18.
//

#import <UIKit/UIKit.h>

#import "PhotoAlbumViewController.h"
#import "PBPodUIImageCarousel_UmbHeader.h"
#import "PBPodUILibraries_UmbHeader.h"

#import "PBMainNavigationView.h"

NS_ASSUME_NONNULL_BEGIN

@interface PhotoAlbumWithActivityFeedViewController : UIViewController

@property (weak, nonatomic) IBOutlet PBMainNavigationView *navigationView;

@property (weak, nonatomic) IBOutlet UIView *viewNavigationSafeArea;

//Properties
@property (nonatomic, weak) id <PhotoAlbumViewControllerDelegate> delegate;

@property (nonatomic, strong) NSDictionary *album;
@property (nonatomic, strong) NSString *albumId;
@property (nonatomic, strong) NSString *albumName;
@property (nonatomic, strong) NSString *sharedAlbumId;
@property (nonatomic, strong) NSString *assetIdOwner;
@property (nonatomic, strong) NSString *assetId;
@property (nonatomic, strong) NSString *filename;
@property (nonatomic, strong) NSString *captureDateTime;
@property (nonatomic, strong) NSString *hostUserId;
@property (nonatomic, strong) NSString *hostName;
@property (nonatomic, strong) NSString *hostPersonId;
@property (nonatomic, strong) NSDictionary *folder;

@property (nonatomic, assign) BOOL isStream;
@property (nonatomic, assign) BOOL isActive;
@property (nonatomic, assign) BOOL isHost;
@property (nonatomic, assign) BOOL isContributing;
@property (nonatomic, assign) BOOL isFavoritedByYou;
@property (nonatomic, assign) BOOL isActivityFeedSelected;

@property (nonatomic, assign) int numberPhotos;
@property (nonatomic, assign) int totalNumberPhotos;
@property (nonatomic, assign) int peopleInvited;
@property (nonatomic, assign) int peopleViewed;
@property (nonatomic, assign) int numberComments;
@property (nonatomic, assign) int numberFavorites;

@property (nonatomic, strong) NSDate *albumStartDate;
@property (nonatomic, strong) NSDate *albumEndDate;



@end

NS_ASSUME_NONNULL_END
