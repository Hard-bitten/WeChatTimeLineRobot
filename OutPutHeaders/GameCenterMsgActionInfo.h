/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface GameCenterMsgActionInfo : XXUnknownSuperclass {
	int _type;
	NSString* _title;
	NSString* _jumpUrl;
}
@property(retain, nonatomic) NSString* jumpUrl;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) int type;
+(id)parseFromXml:(XmlReaderNode_t*)xml;
-(void).cxx_destruct;
@end

