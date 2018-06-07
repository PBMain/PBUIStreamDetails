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

@end
