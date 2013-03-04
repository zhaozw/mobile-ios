//
//  ProfileViewController.h
//  Trovebox
//
//  Created by Patrick Santana on 05/02/13.
//  Copyright (c) 2013 Trovebox. All rights reserved.
//

#import "WebService.h"
#import "OpenPhotoIASKAppSettingsViewController.h"
#import "IASKAppSettingsViewController.h"
#import "IASKSettingsStoreFile.h"

// image cache
#import <SDWebImage/UIImageView+WebCache.h>

//for payment
#import "SKProduct+LocalizedPrice.h"
#import "TroveboxSubscription.h"

// for clean the cache
#import "Timeline+Photo.h"
#import <SDWebImage/SDImageCache.h>

#import "GAI.h"

#import <QuartzCore/QuartzCore.h>
#import "WebViewController.h"

@interface ProfileViewController : GAITrackedViewController <UIAlertViewDelegate, IASKSettingsDelegate>
{
    OpenPhotoIASKAppSettingsViewController *appSettingsViewController;
}

@property (nonatomic, weak) IBOutlet UILabel *labelAlbums;
@property (nonatomic, weak) IBOutlet UILabel *labelPhotos;
@property (nonatomic, weak) IBOutlet UILabel *labelTags;
@property (nonatomic, weak) IBOutlet UILabel *labelStorage;
@property (nonatomic, weak) IBOutlet UILabel *labelName;
@property (nonatomic, weak) IBOutlet UIImageView *photo;
@property (nonatomic, weak) IBOutlet UILabel *labelStorageDetails;
@property (nonatomic, weak) IBOutlet UILabel *labelServer;
@property (nonatomic, weak) IBOutlet UILabel *labelAccount;
@property (nonatomic, weak) IBOutlet UILabel *labelPriceSubscription;
@property (nonatomic, weak) IBOutlet UIButton *buttonSubscription;
- (IBAction)subscribe:(id)sender;
- (IBAction)openFeaturesList:(id)sender;
@property (nonatomic, weak) IBOutlet UIButton *buttonFeatureList;

@property (nonatomic, retain) OpenPhotoIASKAppSettingsViewController *appSettingsViewController;

@end