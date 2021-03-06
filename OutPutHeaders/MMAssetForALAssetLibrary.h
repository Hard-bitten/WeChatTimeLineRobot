/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMAssetBigImageDelegate.h"
#import "MMAsset.h"

@class CLLocation, NSMutableArray, NSString, ALAsset;

@interface MMAssetForALAssetLibrary : MMAsset <MMAssetBigImageDelegate> {
	id<MMAssetBigImageDelegate> m_bigImageDelegate;
	BOOL m_isNeedOriginImage;
	BOOL m_hasStartInitAsset;
	ALAsset* m_asset;
	NSString* m_assetUrlForSystem;
	NSMutableArray* m_bigImageResultBlocks;
	NSMutableArray* m_bigImageErrorBlocks;
	NSMutableArray* m_bigImageProcessBlocks;
	NSMutableArray* m_thumbImageResultBlocks;
	NSMutableArray* m_thumbImageErrorBlocks;
	CLLocation* m_location;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CLLocation* m_location;
@property(assign, nonatomic) BOOL m_hasStartInitAsset;
@property(retain, nonatomic) NSMutableArray* m_thumbImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray* m_thumbImageResultBlocks;
@property(retain, nonatomic) NSMutableArray* m_bigImageProcessBlocks;
@property(retain, nonatomic) NSMutableArray* m_bigImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray* m_bigImageResultBlocks;
@property(retain, nonatomic) ALAsset* m_asset;
@property(retain, nonatomic) NSString* m_assetUrlForSystem;
+(id)NormalImage:(id)image quality:(float)quality edgeLimit:(float)limit;
+(id)LongImage:(id)image quality:(float)quality edgeLimit:(float)limit;
+(id)ImagePreventRecursiveCompress:(id)compress quality:(float)quality minEarnings:(float)earnings normalImageSizeLimit:(unsigned)limit longImageSizeLimit:(unsigned)limit5;
+(BOOL)shouldPreventRecursiveCompress:(id)compress edgeLimit:(float)limit;
+(id)EditImage:(id)image quality:(float)quality;
+(id)getOriginImageDataFromRepresentaion:(id)representaion;
+(id)fitShortEdgeForAsset:(id)asset toLongEdge:(float)longEdge;
-(void)setM_isNeedOriginImage:(BOOL)image;
-(BOOL)m_isNeedOriginImage;
-(void).cxx_destruct;
-(void)asyncGetMetadata:(id)metadata;
-(CGSize)getImageRatioSize;
-(id)getCreatedDate;
-(void)asyncGetVideoUrlWithBlock:(id)block;
-(id)getVideoUrl;
-(id)videoDuration;
-(BOOL)isVideo;
-(id)copyWithZone:(NSZone*)zone;
-(void)onGetBigImageError;
-(void)onGetBigImage:(id)image data:(id)data;
-(void)callErrorBlocks;
-(void)callResultBlocksWith:(id)with imageData:(id)data;
-(BOOL)needGetAssetFromLibraryWithCompressConfig:(id)compressConfig;
-(void)onGetImageErrorFromAsset;
-(void)onGetImageFromAsset:(id)asset data:(id)data;
-(void)onGetImageAsset:(id)asset compressConfig:(id)config;
-(void)setBigImageDelegate:(id)delegate;
-(id)getOriginImageDataSize;
-(BOOL)isPicture;
-(void)asyncGetAspectRatioThumbnailWithTargetSize:(CGSize)targetSize andResult:(id)result;
-(void)asyncGetThumbnail:(id)thumbnail;
-(id)getThumbnail;
-(id)getThumbImage;
-(void)getDisplayImageWithCompressConfig:(id)compressConfig ResultBlock:(id)block ErrorBlock:(id)block3;
-(void)getBigImageWithCompressConfig:(id)compressConfig ProcessBlock:(id)block ResultBlock:(id)block3 ErrorBlock:(id)block4;
-(id)alAssetReferenceUrl;
-(id)assetUrl;
-(double)longitude;
-(double)latitude;
-(BOOL)hasLocation;
-(id)retriveLocation;
-(id)retriveAssetUrl;
-(id)initWithAsset:(id)asset IsNeedOrigin:(BOOL)origin;
-(id)initWithUrl:(id)url IsNeedOrigin:(BOOL)origin;
-(id)init;
@end

