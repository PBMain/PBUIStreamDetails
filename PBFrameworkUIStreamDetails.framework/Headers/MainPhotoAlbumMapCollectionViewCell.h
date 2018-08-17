//
//  MainPhotoAlbumMapCollectionViewCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 3/14/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MainPhotoAlbumMapCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UIView *tutorialView;
@property (weak, nonatomic) IBOutlet UIButton *tutorialOverlayButton;

-(void)showTutorial : (BOOL)show;


@end
