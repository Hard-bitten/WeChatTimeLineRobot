/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EmoticonServerNotifyTask.h"

@protocol EmoticonRestartBackupWhenDeleteTaskDelegate;

@interface EmoticonRestartBackupWhenDeleteTask : EmoticonServerNotifyTask {
	id<EmoticonRestartBackupWhenDeleteTaskDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<EmoticonRestartBackupWhenDeleteTaskDelegate> m_delegate;
-(void).cxx_destruct;
-(BOOL)resumeLogic;
-(id)initWithDelegate:(id)delegate;
@end

