//
//  ViewController.m
//  lyricsAnalysis
//
//  Created by mac on 2020/11/2.
//

#import "ViewController.h"
#import <AVFoundation/AVFoundation.h>

#import <MediaPlayer/MediaPlayer.h>

#import <notify.h>
#import "KNAnalyzer.h"

#define SONGNAME @"多幸运"
/**
 歌词解析并随音乐滚动显示：让歌词随歌曲的进度来滚动显示
 
 
 */
@interface ViewController ()

{
    id _playerTimeObserver;
    BOOL _isDragging;// 是否拖拽
    UIImage * _lastImage;//最后一次锁屏之后的歌词海报
    
}






@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


@end
