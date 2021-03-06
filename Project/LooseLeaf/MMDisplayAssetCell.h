//
//  MMSinglePhotoCollectionViewCell.h
//  LooseLeaf
//
//  Created by Adam Wulf on 9/18/14.
//  Copyright (c) 2014 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMSinglePhotoCollectionViewCellDelegate.h"
#import "MMDisplayAssetGroup.h"


@interface MMDisplayAssetCell : UICollectionViewCell

@property (nonatomic, weak) NSObject<MMSinglePhotoCollectionViewCellDelegate>* delegate;
@property (nonatomic, assign) CGFloat rotation;

- (void)loadPhotoFromAlbum:(MMDisplayAssetGroup*)album atIndex:(NSInteger)photoIndex forVisibleIndex:(NSInteger)visibleIndex;

@end
