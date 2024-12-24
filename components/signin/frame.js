import React from 'react'

export default function DecorativeFrame({ children }) {
  return (
    <div className="relative w-full max-w-4xl mx-auto my-16">
      {/* Outer container with aspect ratio */}
      <div className="relative w-full pb-[66.67%]"> {/* 3:2 aspect ratio */}
        {/* Green frame with decorative shapes */}
        <div className="absolute inset-0 bg-[#37F2AD] rounded-[2rem] rounded-t-[3rem] shadow-lg">
          {/* Top decorative shape */}
          <div 
            className="absolute -top-8 left-1/2 -translate-x-1/2 w-96 h-16 bg-[#37F2AD]"
            style={{
              borderTopLeftRadius: '100px',
              borderTopRightRadius: '100px',
            }}
          />
          
          {/* Bottom decorative shape */}
          <div 
            className="absolute -bottom-8 left-1/2 -translate-x-1/2 w-96 h-16 bg-[#37F2AD]"
            style={{
              borderBottomLeftRadius: '100px',
              borderBottomRightRadius: '100px',
            }}
          />

          {/* Black space with white border */}
          <div className="absolute inset-[1.5rem] bg-black rounded-[1.5rem] rounded-t-[2.5rem]">
            {/* White border line */}
            <div className="absolute inset-[2px] border-[1px] border-white/30 rounded-[1.4rem] rounded-t-[2.4rem]">
              {/* Inner dark content area */}
              <div className="absolute inset-[2px] bg-[#0D1117] rounded-[1.3rem] rounded-t-[2.3rem] overflow-hidden">
                {/* Content container */}
                <div className="relative w-full h-full p-6">
                  {children}
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  )
}

