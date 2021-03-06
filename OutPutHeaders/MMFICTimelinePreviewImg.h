/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FICEntity.h"

@class WCMediaItem, UIImage, NSString;

@interface MMFICTimelinePreviewImg : XXUnknownSuperclass <FICEntity> {
	WCMediaItem* _mediaItem;
	NSString* _entityUUID;
	NSString* _sourceImageUUID;
	unsigned _eliminationFactor;
}
@property(assign, nonatomic) unsigned eliminationFactor;
@property(readonly, assign, nonatomic) UIImage* sourceImage;
@property(readonly, assign, nonatomic) NSString* formatName;
@property(readonly, assign, nonatomic) NSString* sourceImageUUID;
@property(readonly, assign, nonatomic) NSString* entityUUID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCMediaItem* mediaItem;
+(id)genFICEntity:(id)entity;
-(void).cxx_destruct;
-(BOOL)isEqual:(id)equal;
-(id)drawingBlockForImage:(id)image;
-(id)init;
@end

