//
//  W5AssetPickerState.h
//  W5AssetPickerController
//
//  Created by Wesley Smith on 5/24/12.
//  Copyright (c) 2012 Wesley D. Smith. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    W5AssetPickerStatePickingAlbum,
    W5AssetPickerStatePickingAssets,
    W5AssetPickerStatePickingDone,
    W5AssetPickerStatePickingCancelled
} W5AssetPickingState;

@interface W5AssetPickerState : NSObject
@property (nonatomic, strong) NSMutableArray *selectedAssets;
@property (nonatomic, readwrite) NSUInteger selectedCount;
@property (nonatomic, readwrite) W5AssetPickingState state;
@end
