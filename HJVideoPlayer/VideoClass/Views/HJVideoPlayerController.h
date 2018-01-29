//
//  HJVideoPlayerController.h
//  HJVideoPlayer
//
//  Created by WHJ on 2016/12/8.
//  Copyright © 2016年 WHJ. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, VideoPlayerStatus) {
    videoPlayer_unknown,
    videoPlayer_readyToPlay,
    videoPlayer_playing,
    videoPlayer_pause,
    videoPlayer_loading,
    videoPlayer_playEnd,
    videoPlayer_playFailed
};

@interface HJVideoPlayerController : UIViewController

@property (nonatomic ,strong) NSString *url;

@property (nonatomic, assign , readonly) BOOL isFullScreen;

@property (nonatomic, assign , readonly) VideoPlayerStatus playStatus;


/** 设置URL后自动播放 */
@property (nonatomic, assign) BOOL auoPlay;
/** 是否仅支持全屏 */
@property (nonatomic, assign) BOOL onlyFullScreen;


- (instancetype)initWithFrame:(CGRect)frame;

@end
